#include "Pusher.h"

int main()
{
    Pusher pusher("ck.pem", "123456");
    pusher.isSandBox = true;

    vector<string> tokenStringList;
    tokenStringList.push_back("036ad8382ffab3d78b33071ec0a78294e5e96060ef8a77841c8b9014d93f5e21");

    PusherContent content;
    content.badge = 1;
    content.content = "Test_from_ZhouWei";
    content.sound = "default";

    pusher.pushNotification(content,tokenStringList);

    return 0;
}
