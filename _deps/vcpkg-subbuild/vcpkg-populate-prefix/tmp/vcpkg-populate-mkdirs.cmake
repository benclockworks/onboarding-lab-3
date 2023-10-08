# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-src"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-build"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/tmp"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src"
  "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/benchikbayor/Desktop/onboarding-lab-3/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
