ANDROUX

This project aims to bring capabilities of a linux desktop to your android device. It will be another flavour of linux
which can be used for development use. It gives you freedom of a development machine on your mobile.

Building is supported on both linux and mac osx. Clone the repo using 

git clone --depth=1 https://github.com/heliumfire/androux

and then run 

./build_all.sh

from androux directory

the build will be in system directory. You need to merge this system directory to the system directory of your rom in 
order for this to work. Please make sure that the system image of your ROM is within the size limits. Or you have to extend the system partiton when flasing the ROM. I am working on a device release and will let you know when it is done.
