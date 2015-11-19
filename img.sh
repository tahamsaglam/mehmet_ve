#!/bin/bash
#
# Script for building kernel w/ built zImage
#

rm -f /home/taha/bit/unpack/boot.img-zImage
cp /home/taha/mehmet_ve/arch/arm/boot/zImage /home/taha/bit/unpack/boot.img-zImage
cd /home/taha/bit/
tools/mkbootimg --kernel unpack/boot.img-zImage --ramdisk unpack/boot.img-ramdisk.gz -o target_img/boot.img --base `cat unpack/boot.img-base`
thunar /home/taha/bit/target_img
cd /home/taha/mehmet_ve/
