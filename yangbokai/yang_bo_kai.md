# Linux命令

## 权限
- sudo 以系统管理者身份运行(root权限)

## 安装与删除
- sudo apt-get update -> 更新源
- sudo apt-get install 安装包 -> 安装
- sudo apt-get remove 安装包 -> 删除 
- sudo dpkg -i 安装包 -> 安装deb安装包 (注:**也可双击安装包进行安装**)
- sudo dpkg -r 软件名 -> 删除软件

## 查找
- locate 文件名 -> 查找文件路径
- sudo dpkg -l | grep "weixin" -> 查找含有 weixin 的软件 

## 关机
- sudo power off -> 关机
- sudo reboot -> 重启

## 目录相关
- cd + 路径 -> 打开相应路径
- nautilus + 路径 -> 打开相应路径的图形化界面 
- ls -> 查看当前目录下所有目录和文件( **不包括** 隐藏文件)
- ls -a -> 查看当前目录下所有目录和文件( **包括** 隐藏文件)
- ls -al -> 查看当前目录下所有目录和文件的详细信息( **包括**隐藏文件)
- rm 文件名 -> 删除当前目录下的文件
- rm -f 文件名 -> 删除当前目录的的文件(不询问)
- mkdir 文件名 -> 在当前目录下创建文件夹
- touch 文件名 -> 建立新的文件

## 运行
- sh -> 运行 .sh 文件 (eg.  sh Steam.sh) 

## 生存密钥
- ssh - keygen -> 生成ssh密钥

# git
## 相关命令
- git init -> 初始化一个git仓库
- git clone + 链接 -> clone一个git仓库
- git config -> 配置信息
- git add -> 添加文件到缓存命令
- git status -> 查看文件的状态命令
- git diff -> 查看更新的详细信息命令
- git commit -> 提交命令
- git reset HEAD -> 取消缓存命令
- git rm -> 删除命令
- git mv -> 移动或重命名命令
- git branch -> 查看分支命令
- git branch (branchname) -> 创建分支命令
- git checkout (branchname) -> 切换分支命令
- git merge -> 合并分支命令
- git branch -d (branchname) -> 删除分支命令
- git remote add origin -> 添加远程仓库
- git remote -v -> 查看当前的远程仓库
- git fetch、git pull -> 提取远程仓仓库
- git push -> 推送到远程仓库
- git remote rm origin-> 删除远程仓库
- git remote set-urt origin -> 更换远程仓库

## git流程
- 用户有属于自己的工作区，每个工作区相对独立（git init）；
- 用户完成工作后可以将文件提交至本地仓库（commit）；
- 本地仓库包含和记录了用户的历次提交（log）；
- 提交的过程相当于更新迭代；
- 保存在本地仓库的数据可以被提交到远程仓库（push）；
- 管理员可以决定提交上来的分支是否合并；
- 远程仓库（github）可以被设置成私有或公有；
- 用户可以克隆公共仓库到本地（clone）；
- 仓库有诸多分支，一般保留一个master/main分支作为根节点，不做任何改动；
- 通过master的分支来完成工作，可以有效减少因操作不当导致数据损坏带来的后果；