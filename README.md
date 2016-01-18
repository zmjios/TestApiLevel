# TestApiLevel

##说明

首先必须配置pch预编译文件，然后在pch文件中引用自定义的头文件，比方在UIKit和Foundation之前引用，所以如果想要自己的项目支持的自定义的编译警告，必须将debug模式下设置 Enable Modules 和 Link Frameworks Automatically 为 NO ,具体可参考如下

![](20160117.png)

自动连接的情况需要禁止，同时这时候编译可能通过不了，需要手动添加编译的库文件。
