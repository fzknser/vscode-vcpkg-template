Шаблон проекта привязки библиотек пакетного менеджера VCPKG в IDE VS Code
-  install vcpkg https://learn.microsoft.com/ru-ru/vcpkg/get_started/get-started?pivots=shell-powershell
-  sudo nano .bashrc
-  в конце файла добавляем
-  export VCPKG_ROOT=/home/path/to/vcpkg 
-  export PATH=$PATH:$VCPKG_ROOT
-  export VCPKG_FORCE_SYSTEM_BINARIES=1
-  vcpkg add port fmt - не делать, иначе библиотеки будут дублироваться в текущем проекте
запуск cmake в терминале
-  cd to/workspace/project
-  mkgir build
-  cd build
-  cmake ..
-  cmake --build .
