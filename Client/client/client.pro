QT += network

HEADERS += \
# Models
    $${PWD}/OAI_addres_get_200_response_inner.h \
    $${PWD}/OAI_addres_get_200_response_inner_peoples_inner.h \
    $${PWD}/OAI_addunit_put_request.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAI_addres_get_200_response_inner.cpp \
    $${PWD}/OAI_addres_get_200_response_inner_peoples_inner.cpp \
    $${PWD}/OAI_addunit_put_request.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp \
    main.cpp
