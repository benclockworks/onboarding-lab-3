# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitclone-lastrun.txt" AND EXISTS "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitinfo.txt" AND
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitclone-lastrun.txt" IS_NEWER_THAN "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/opt/homebrew/bin/git"
            clone --no-checkout --depth 1 --no-single-branch --config "advice.detachedHead=false" "https://github.com/microsoft/vcpkg.git" "vcpkg-src"
    WORKING_DIRECTORY "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/microsoft/vcpkg.git'")
endif()

execute_process(
  COMMAND "/opt/homebrew/bin/git"
          checkout "master" --
  WORKING_DIRECTORY "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/opt/homebrew/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitinfo.txt" "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/vcpkg-populate-gitclone-lastrun.txt'")
endif()
