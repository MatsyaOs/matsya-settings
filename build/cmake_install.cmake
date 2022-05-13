# Install script for directory: /home/tokyo/clone/cuteclone/settings

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Build")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/clone/cuteclone/settings/build/cutefish-settings")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutefish-settings")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/applications/cutefish-settings.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/applications" TYPE FILE FILES "/home/tokyo/clone/cuteclone/settings/cutefish-settings.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/cutefish-settings/translations/ar_AA.qm;/usr/share/cutefish-settings/translations/az_AZ.qm;/usr/share/cutefish-settings/translations/be_BY.qm;/usr/share/cutefish-settings/translations/be_Latn.qm;/usr/share/cutefish-settings/translations/bg_BG.qm;/usr/share/cutefish-settings/translations/bs_BA.qm;/usr/share/cutefish-settings/translations/cs_CZ.qm;/usr/share/cutefish-settings/translations/da_DK.qm;/usr/share/cutefish-settings/translations/de_DE.qm;/usr/share/cutefish-settings/translations/en_US.qm;/usr/share/cutefish-settings/translations/eo_XX.qm;/usr/share/cutefish-settings/translations/es_ES.qm;/usr/share/cutefish-settings/translations/es_MX.qm;/usr/share/cutefish-settings/translations/fa_IR.qm;/usr/share/cutefish-settings/translations/fi_FI.qm;/usr/share/cutefish-settings/translations/fr_FR.qm;/usr/share/cutefish-settings/translations/he_IL.qm;/usr/share/cutefish-settings/translations/hi_IN.qm;/usr/share/cutefish-settings/translations/hu_HU.qm;/usr/share/cutefish-settings/translations/id_ID.qm;/usr/share/cutefish-settings/translations/ie.qm;/usr/share/cutefish-settings/translations/it_IT.qm;/usr/share/cutefish-settings/translations/ja_JP.qm;/usr/share/cutefish-settings/translations/lt_LT.qm;/usr/share/cutefish-settings/translations/lv_LV.qm;/usr/share/cutefish-settings/translations/mg.qm;/usr/share/cutefish-settings/translations/ml_IN.qm;/usr/share/cutefish-settings/translations/nb_NO.qm;/usr/share/cutefish-settings/translations/ne_NP.qm;/usr/share/cutefish-settings/translations/pl_PL.qm;/usr/share/cutefish-settings/translations/pt_BR.qm;/usr/share/cutefish-settings/translations/pt_PT.qm;/usr/share/cutefish-settings/translations/ro_RO.qm;/usr/share/cutefish-settings/translations/ru_RU.qm;/usr/share/cutefish-settings/translations/si_LK.qm;/usr/share/cutefish-settings/translations/sk_SK.qm;/usr/share/cutefish-settings/translations/so.qm;/usr/share/cutefish-settings/translations/sr_RS.qm;/usr/share/cutefish-settings/translations/sv_SE.qm;/usr/share/cutefish-settings/translations/sw.qm;/usr/share/cutefish-settings/translations/ta_IN.qm;/usr/share/cutefish-settings/translations/tr_TR.qm;/usr/share/cutefish-settings/translations/uk_UA.qm;/usr/share/cutefish-settings/translations/uz_UZ.qm;/usr/share/cutefish-settings/translations/vi_VN.qm;/usr/share/cutefish-settings/translations/zh_CN.qm;/usr/share/cutefish-settings/translations/zh_HK.qm;/usr/share/cutefish-settings/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/cutefish-settings/translations" TYPE FILE FILES
    "/home/tokyo/clone/cuteclone/settings/build/ar_AA.qm"
    "/home/tokyo/clone/cuteclone/settings/build/az_AZ.qm"
    "/home/tokyo/clone/cuteclone/settings/build/be_BY.qm"
    "/home/tokyo/clone/cuteclone/settings/build/be_Latn.qm"
    "/home/tokyo/clone/cuteclone/settings/build/bg_BG.qm"
    "/home/tokyo/clone/cuteclone/settings/build/bs_BA.qm"
    "/home/tokyo/clone/cuteclone/settings/build/cs_CZ.qm"
    "/home/tokyo/clone/cuteclone/settings/build/da_DK.qm"
    "/home/tokyo/clone/cuteclone/settings/build/de_DE.qm"
    "/home/tokyo/clone/cuteclone/settings/build/en_US.qm"
    "/home/tokyo/clone/cuteclone/settings/build/eo_XX.qm"
    "/home/tokyo/clone/cuteclone/settings/build/es_ES.qm"
    "/home/tokyo/clone/cuteclone/settings/build/es_MX.qm"
    "/home/tokyo/clone/cuteclone/settings/build/fa_IR.qm"
    "/home/tokyo/clone/cuteclone/settings/build/fi_FI.qm"
    "/home/tokyo/clone/cuteclone/settings/build/fr_FR.qm"
    "/home/tokyo/clone/cuteclone/settings/build/he_IL.qm"
    "/home/tokyo/clone/cuteclone/settings/build/hi_IN.qm"
    "/home/tokyo/clone/cuteclone/settings/build/hu_HU.qm"
    "/home/tokyo/clone/cuteclone/settings/build/id_ID.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ie.qm"
    "/home/tokyo/clone/cuteclone/settings/build/it_IT.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ja_JP.qm"
    "/home/tokyo/clone/cuteclone/settings/build/lt_LT.qm"
    "/home/tokyo/clone/cuteclone/settings/build/lv_LV.qm"
    "/home/tokyo/clone/cuteclone/settings/build/mg.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ml_IN.qm"
    "/home/tokyo/clone/cuteclone/settings/build/nb_NO.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ne_NP.qm"
    "/home/tokyo/clone/cuteclone/settings/build/pl_PL.qm"
    "/home/tokyo/clone/cuteclone/settings/build/pt_BR.qm"
    "/home/tokyo/clone/cuteclone/settings/build/pt_PT.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ro_RO.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ru_RU.qm"
    "/home/tokyo/clone/cuteclone/settings/build/si_LK.qm"
    "/home/tokyo/clone/cuteclone/settings/build/sk_SK.qm"
    "/home/tokyo/clone/cuteclone/settings/build/so.qm"
    "/home/tokyo/clone/cuteclone/settings/build/sr_RS.qm"
    "/home/tokyo/clone/cuteclone/settings/build/sv_SE.qm"
    "/home/tokyo/clone/cuteclone/settings/build/sw.qm"
    "/home/tokyo/clone/cuteclone/settings/build/ta_IN.qm"
    "/home/tokyo/clone/cuteclone/settings/build/tr_TR.qm"
    "/home/tokyo/clone/cuteclone/settings/build/uk_UA.qm"
    "/home/tokyo/clone/cuteclone/settings/build/uz_UZ.qm"
    "/home/tokyo/clone/cuteclone/settings/build/vi_VN.qm"
    "/home/tokyo/clone/cuteclone/settings/build/zh_CN.qm"
    "/home/tokyo/clone/cuteclone/settings/build/zh_HK.qm"
    "/home/tokyo/clone/cuteclone/settings/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tokyo/clone/cuteclone/settings/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
