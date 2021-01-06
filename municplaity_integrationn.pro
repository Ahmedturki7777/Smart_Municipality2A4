QT       += core gui sql network printsupport serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    amenagement.cpp \
    arduino.cpp \
    bouton_employe.cpp \
    bouton_espace.cpp \
    bouton_evenement.cpp \
    bouton_monument.cpp \
    bouton_profil.cpp \
    bouton_reclamation.cpp \
    button_congee.cpp \
    button_pointage.cpp \
    conexion.cpp \
    congee.cpp \
    education.cpp \
    employe.cpp \
    envoi_mail.cpp \
    espace.cpp \
    estimation.cpp \
    evenement.cpp \
    exportexcelobject.cpp \
    fenetre2.cpp \
    license.cpp \
    license_button.cpp \
    main.cpp \
    mainwindow.cpp \
    monument.cpp \
    pointage.cpp \
    profil.cpp \
    projet.cpp \
    projet_button.cpp \
    reclamation.cpp \
    rfid.cpp \
    rgb.cpp

HEADERS += \
    amenagement.h \
    arduino.h \
    bouton_employe.h \
    bouton_espace.h \
    bouton_evenement.h \
    bouton_monument.h \
    bouton_profil.h \
    bouton_reclamation.h \
    button_congee.h \
    button_pointage.h \
    conexion.h \
    congee.h \
    education.h \
    employe.h \
    envoi_mail.h \
    espace.h \
    estimation.h \
    evenement.h \
    exportexcelobject.h \
    fenetre2.h \
    license.h \
    license_button.h \
    mainwindow.h \
    monument.h \
    pointage.h \
    profil.h \
    projet.h \
    projet_button.h \
    reclamation.h \
    rfid.h \
    rgb.h

FORMS += \
    amenagement.ui \
    bouton_employe.ui \
    bouton_espace.ui \
    bouton_evenement.ui \
    bouton_monument.ui \
    bouton_profil.ui \
    bouton_reclamation.ui \
    button_congee.ui \
    button_pointage.ui \
    education.ui \
    estimation.ui \
    fenetre2.ui \
    license_button.ui \
    mainwindow.ui \
    projet_button.ui \
    rgb.ui

TRANSLATIONS += \
    municplaity_integrationn_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES += \
    ressource/icon_add.png
