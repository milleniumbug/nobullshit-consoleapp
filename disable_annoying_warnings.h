// Here you can globally disable annoying unhelpful warnings.
// You can add/remove/comment/uncomment warning disabling directives at will

#ifdef _MSC_VER

// Warning 4018: https://msdn.microsoft.com/en-us/library/y92ktdf2.aspx
// signed/unsigned mismatch
#pragma warning(disable: 4018)

// Warning 4061: https://msdn.microsoft.com/en-us/library/96f5t7fy.aspx
// enumerator 'identifier' in switch of enum 'enumeration' is not explicitly handled by a case label
#pragma warning(disable: 4061)

// Warning 4099: https://msdn.microsoft.com/en-us/library/695x5bes.aspx
// 'identifier' : type name first seen using 'struct X' now seen using 'class X'
#pragma warning(disable: 4099)

// Warning 4100: https://msdn.microsoft.com/en-us/library/695x5bes.aspx
// 'identifier' : unreferenced formal parameter
#pragma warning(disable: 4100)

// Warning 4244: https://msdn.microsoft.com/en-us/library/2d7604yb.aspx
// 'argument' : conversion from 'double' to 'int', possible loss of data
#pragma warning(disable: 4244)

// Warning 4256: https://msdn.microsoft.com/en-us/library/ex7xa0zs.aspx
// 'function' : constructor for class with virtual bases has '...'; calls may not be compatible with older versions of Visual C++
#pragma warning(disable: 4256)

// Warning 4258: https://msdn.microsoft.com/en-us/library/0hx5ckb0.aspx
// 'variable' : definition from the for loop is ignored; the definition from the enclosing scope is used"
#pragma warning(disable: 4258)

// Warning 4342: https://msdn.microsoft.com/en-us/library/z8910865.aspx
// behavior change: 'function' called, but a member operator was called in previous versions
#pragma warning(disable: 4342)

// Warning 4345: https://msdn.microsoft.com/en-us/library/z8910865.aspx
#pragma warning(disable: 4345)

// Warning 4351: https://msdn.microsoft.com/en-us/library/1ywe7hcy.aspx
// new behavior: elements of array 'array' will be default initialized
#pragma warning(disable: 4351)

// Warning 4511: https://msdn.microsoft.com/en-us/library/2f10sfzz.aspx
// 'class' : copy constructor could not be generated
#pragma warning(disable: 4511)

// Warning 4512: https://msdn.microsoft.com/en-us/library/hsyx7kbz.aspx
// 'class' : assignment operator could not be generated
#pragma warning(disable: 4512)

// Warning 4513: https://msdn.microsoft.com/en-us/library/b0ew74dc.aspx
// 'class' : destructor could not be generated
#pragma warning(disable: 4513)

// Warning 4514: https://msdn.microsoft.com/en-us/library/cw9x3tcf.aspx
// 'function' : unreferenced inline function has been removed
#pragma warning(disable: 4514)

// Warning 4686: https://msdn.microsoft.com/en-us/library/ae77984s.aspx
//  ' user-defined type ' : possible change in behavior, change in UDT return calling convention 
#pragma warning(disable: 4686)

#endif