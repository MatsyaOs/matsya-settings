# Install script for directory: /home/tokyo/matsyaos/QT6/done/matsya-settings

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_INSTALL_SO_NO_EXE "0")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/matsya-settings")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-settings")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/applications/matsya-settings.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/applications" TYPE FILE FILES "/home/tokyo/matsyaos/QT6/done/matsya-settings/matsya-settings.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/matsya-settings/translations/ar_AA.qm;/usr/share/matsya-settings/translations/az_AZ.qm;/usr/share/matsya-settings/translations/be_BY.qm;/usr/share/matsya-settings/translations/be_Latn.qm;/usr/share/matsya-settings/translations/bg_BG.qm;/usr/share/matsya-settings/translations/bs_BA.qm;/usr/share/matsya-settings/translations/cs_CZ.qm;/usr/share/matsya-settings/translations/da_DK.qm;/usr/share/matsya-settings/translations/de_DE.qm;/usr/share/matsya-settings/translations/en_US.qm;/usr/share/matsya-settings/translations/eo_XX.qm;/usr/share/matsya-settings/translations/es_ES.qm;/usr/share/matsya-settings/translations/es_MX.qm;/usr/share/matsya-settings/translations/fa_IR.qm;/usr/share/matsya-settings/translations/fi_FI.qm;/usr/share/matsya-settings/translations/fr_FR.qm;/usr/share/matsya-settings/translations/he_IL.qm;/usr/share/matsya-settings/translations/hi_IN.qm;/usr/share/matsya-settings/translations/hu_HU.qm;/usr/share/matsya-settings/translations/id_ID.qm;/usr/share/matsya-settings/translations/ie.qm;/usr/share/matsya-settings/translations/it_IT.qm;/usr/share/matsya-settings/translations/ja_JP.qm;/usr/share/matsya-settings/translations/lt_LT.qm;/usr/share/matsya-settings/translations/lv_LV.qm;/usr/share/matsya-settings/translations/mg.qm;/usr/share/matsya-settings/translations/ml_IN.qm;/usr/share/matsya-settings/translations/nb_NO.qm;/usr/share/matsya-settings/translations/ne_NP.qm;/usr/share/matsya-settings/translations/pl_PL.qm;/usr/share/matsya-settings/translations/pt_BR.qm;/usr/share/matsya-settings/translations/pt_PT.qm;/usr/share/matsya-settings/translations/ro_RO.qm;/usr/share/matsya-settings/translations/ru_RU.qm;/usr/share/matsya-settings/translations/si_LK.qm;/usr/share/matsya-settings/translations/sk_SK.qm;/usr/share/matsya-settings/translations/so.qm;/usr/share/matsya-settings/translations/sr_RS.qm;/usr/share/matsya-settings/translations/sv_SE.qm;/usr/share/matsya-settings/translations/sw.qm;/usr/share/matsya-settings/translations/ta_IN.qm;/usr/share/matsya-settings/translations/tr_TR.qm;/usr/share/matsya-settings/translations/uk_UA.qm;/usr/share/matsya-settings/translations/uz_UZ.qm;/usr/share/matsya-settings/translations/vi_VN.qm;/usr/share/matsya-settings/translations/zh_CN.qm;/usr/share/matsya-settings/translations/zh_HK.qm;/usr/share/matsya-settings/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/matsya-settings/translations" TYPE FILE FILES
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ar_AA.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/az_AZ.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/be_BY.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/be_Latn.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/bg_BG.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/bs_BA.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/cs_CZ.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/da_DK.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/de_DE.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/en_US.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/eo_XX.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/es_ES.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/es_MX.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/fa_IR.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/fi_FI.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/fr_FR.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/he_IL.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/hi_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/hu_HU.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/id_ID.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ie.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/it_IT.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ja_JP.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/lt_LT.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/lv_LV.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/mg.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ml_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/nb_NO.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ne_NP.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/pl_PL.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/pt_BR.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/pt_PT.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ro_RO.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ru_RU.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/si_LK.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/sk_SK.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/so.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/sr_RS.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/sv_SE.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/sw.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/ta_IN.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/tr_TR.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/uk_UA.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/uz_UZ.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/vi_VN.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/zh_CN.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/zh_HK.qm"
    "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tokyo/matsyaos/QT6/done/matsya-settings/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
