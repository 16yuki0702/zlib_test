## Description
  This is my test project for zlib in linux environment.  
  Why I started this,  Because there is no good sample for me to use zlib.  
  So I started this, for me and people in trouble as well.

## Usage
  First of all, clone project.
``` bash
$ git clone this url
```

  And change your current directory to this project exists.  
``` bash
$ cd /path/to/project
```
  And do the command below.

``` bash
$ cd external
$ tar xf archives/zlib-1.2.11.tar.gz
$ cd zlib-1.2.11
$ ./configure --prefix=`pwd`/build
$ sudo make
$ sudo make install
$ sudo cp -p build/include/* `pwd`/../../inc
$ sudo cp -p build/lib/{*.a, *.so, *.so.*} `pwd`/../../lib
```

  And then make this project.  
  that's all. enjoy.
