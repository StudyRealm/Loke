:'Partionind and Formatting partitions with appropriate file system.

 hardened config : /dev/$device
 			|
			 - /dev/$device"1"  300M	EFI_sys_partition 	FAT32 	/mnt/boot
			|
			 - /dev/$device"2"  T-300M	Linux FS  x86_64 (/) 	EXT4	/mnt 

	
'

lsblk 

#		DISK PARTITION


read -p "Enter dev: " device

#(echo p; echo g;echo n;echo 1;echo "";echo "+300M";echo n;echo 2;echo "";echo "";echo t;echo 1:echo 1:echo w) | fdisk /dev/$device 

cat ./fdisk_cmd_dialouge  | fdisk /dev/$device 

#		FORMAT THE DISKS

mkfs.fat -F 32 /dev/$device"1"

mkfs.ext4 /dev/$device"2"

#		MOUNT THE PARTITIONS

mount --mkdir /dev/$device"1" /mnt/boot

mount /dev/$device"2" /mnt/ 

#need to make and format custom number of partitions in GPT, use arrays
#create options to make stacked block devices for LVM, system_encrypt and RAID.

# 		INSTALLATION 

:'
		choosing 'n' numbers of https mirrors sort by download rate
'

read -p "Enter number of mirrors: " nums

reflector --latest nums --protocol https --sort rate --save /etc/pacman.d/mirrorlist 

:'
		Installing base pkgs, linux kernel/specific kernel pkg, linux

		For installing pkgs not included in base,
			1.pacstrap
			2.pacman, req=chroot into system.
'

pacstrap /mnt base linux linux-firmware

#		CONFIGURE THE SYSTEM

genfstab -U /mnt >> /mnt/etc/fstab

cat ./chroot_cmd | arch-chroot /mnt
