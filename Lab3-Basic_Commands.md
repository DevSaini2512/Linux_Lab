# Sudo and Admin managment commands

## ✅ 1. sudo – Run Commands as Administrator

### sudo (SuperUser DO) allows you to run commands with root privileges.

sudo command

Example:

sudo apt update

ss

sudo reboot

You'll usually be prompted to enter your password.

## ✅ 2. User Management (Linux/macOS only)

### 👤 adduser – Create a New User

sudo adduser newusername

ss

You'll be prompted to set a password and user info.


### 🔑 passwd – Change User Password

sudo passwd newusername

ss

### 👥 usermod – Modify User Account

Add a user to a group:

sudo usermod -aG groupname username

Example:

sudo usermod -aG sudo alice

ss

### ❌ deluser – Delete a User

sudo deluser username

To remove the user's home directory:

ss

To remove the user's home directory:

sudo deluser --remove-home username

## ✅ 3. File Permissions with chmod and chown

### 🔐 chmod – Change File Permissions

Basic syntax:

chmod [permissions] file

Common Usage:

chomd 755 script.sh

ss

chmod +x file.sh

ss

chmod -x file.sh

ss

| Number | Permission             |
| ------ | ---------------------- |
| 7      | read + write + execute |
| 6      | read + write           |
| 5      | read + execute         |
| 4      | read only              |
| 0      | no permission          |

Example:

chmod 644 file.txt

### 👑 chown – Change File Owner

sudo chown user:group file

Example:

sudo chown alice:alice myfile.txt

ss

## ✅ 4. Disk Usage & System Info

### 💽 df – Disk Space Usage

df -h

Shows mounted partitions with human-readable

### 📁 du – Directory Size

du -sh folder_name

ss

### 🖥️ top – Live System Processes

top 

Press q to quit.

Alternative htop (better UI, needs to be installed)

## ✅ 5. Networking Commands