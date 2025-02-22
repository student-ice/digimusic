import "../../util"
import "../widgets"
import Melodix.API 1.0
import QtQuick 2.11
import QtQuick.Layouts 1.15
import org.deepin.dtk 1.0

Item {
    function passwordLogin() {
        function onReply(reply) {
            API.onCellphoneLoginCompleted.disconnect(onReply);
            Worker.saveCookie(reply.cookie);
            API.addCookie();
            API.getAccountInfo();
            isLogin = true;
            root.close();
        }

        API.onCellphoneLoginCompleted.connect(onReply);
        API.phoneLogin(phone.text, password.text);
    }

    anchors.fill: parent

    ColumnLayout {
        anchors.fill: parent

        Item {
            height: 50
            width: 50
        }

        Item {
            width: parent.width
            height: 50

            Row {
                anchors.fill: parent
                spacing: 5

                Label {
                    text: "手机号:"
                    font.bold: true
                    width: 50
                    anchors.leftMargin: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                LineEdit {
                    id: phone

                    width: parent.width - 60
                    placeholderText: "请输入手机号"
                    anchors.verticalCenter: parent.verticalCenter
                }

            }

        }

        Item {
            width: parent.width
            height: 50

            Row {
                anchors.fill: parent
                spacing: 5

                Label {
                    text: "密码:"
                    font.bold: true
                    width: 50
                    anchors.leftMargin: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                PasswordEdit {
                    id: password

                    width: parent.width - 60
                    placeholderText: "请输入密码"
                    anchors.verticalCenter: parent.verticalCenter
                }

            }

        }

        Item {
            height: 10
        }

        RecommandButton {
            id: loginBtn

            text: "登录"
            enabled: phone.text !== "" && password.text !== ""
            Layout.fillWidth: true
            onClicked: {
                passwordLogin();
            }
        }

        Item {
            Layout.fillHeight: true
        }

    }

}
