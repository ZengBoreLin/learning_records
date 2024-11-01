#以下是学到的linux指令
sudo	root用户权限
chmod	为文件增加功能（可读，可写，可执行）
cp	复制
cd	进入
ls	文件列表（一行多个）
ll	详细文件列表（一行一个）
rm	删除
mkdir	创建文件夹
touch	进入/创建文件
file	寻找文件
whereis		寻找
poweroff	关机
reboot		重启
apt update	软件包更新
apt install	通过软件包下载
ssh -T		ssh通信
keygen	生成密钥对
alias	别名
echo	打印
for	循环
if	判断
ping	测试延迟

#git相关
git init	初始化仓库
git status	仓库状态
git add		跟踪文件
git commit	提交文件
git push	发送到远程仓库
git pull	从远程仓库获取
git clone	克隆仓库/文件
git log		日志
git rm		删除
git show	显示各种文件
git branch	创建分支
git checkout	切换分支

#git流程
用户有属于自己的工作区，每个工作区相对独立（git init）；
用户完成工作后可以将文件提交至本地仓库（commit）；
本地仓库包含和记录了用户的历次提交（log）；
提交的过程相当于更新迭代；
保存在本地仓库的数据可以被提交到远程仓库（push）；
管理员可以决定提交上来的分支是否合并；
远程仓库（github）可以被设置成私有或公有；
用户可以克隆公共仓库到本地（clone）；
仓库有诸多分支，一般保留一个master/main分支作为根节点，不做任何改动；
通过master的分支来完成工作，可以有效减少因操作不当导致数据损坏带来的后果；
