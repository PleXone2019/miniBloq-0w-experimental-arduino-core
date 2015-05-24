This project started when we compiled the Arduino-0019 core with [CodeBlocks](http://www.codeblocks.org) at [RG.Labs](http://www.robotgroup.com.ar), in order to integrate it with the next version of [DuinOS](http://code.google.com/p/duinos). Because the compile process showed 42 warnings, we worked on the core to get a 0-warnings compilation.

This core is experimental, and it needs testing.
It was compiled with Code::Blocks and WinAVR-20090313..

Every change made to the original files was marked with "begin" and "end" comments, and the original lines were commented too, for example:

```
//##RG.Labs.20100919 begin
    //const unsigned int length( ) const { return _length; }
    unsigned int length( ) const { return _length; }
//##RG.Labs.20100919 end
```

Additionally, we added 3 files:

  * CPPLib.h
  * CPPLib.cpp
  * RGLib.h

These files only add:

  * new/delete operators.
  * array new[.md](.md) and delete[.md](.md) operators.
  * Enables virtual destructors.
  * Some constants like "nonAssigned\_pin".