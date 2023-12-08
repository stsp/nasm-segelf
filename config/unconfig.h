#ifndef CONFIG_UNCONFIG_H
#define CONFIG_UNCONFIG_H

#ifndef alloc_size_func2
# ifdef HAVE_FUNC_ATTRIBUTE2_ALLOC_SIZE
#  define alloc_size_func2(x1,x2) ATTRIBUTE(alloc_size(x1,x2))
# else
#  define alloc_size_func2(x1,x2)
# endif
#endif

#ifndef alloc_size_func2_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE2_ALLOC_SIZE
#  define alloc_size_func2_ptr(x1,x2) ATTRIBUTE(alloc_size(x1,x2))
# else
#  define alloc_size_func2_ptr(x1,x2)
# endif
#endif

#ifndef end_with_null
# ifdef HAVE_FUNC_ATTRIBUTE_SENTINEL
#  define end_with_null ATTRIBUTE(sentinel)
# else
#  define end_with_null
# endif
#endif

#ifndef end_with_null_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_SENTINEL
#  define end_with_null_ptr ATTRIBUTE(sentinel)
# else
#  define end_with_null_ptr
# endif
#endif

#ifndef format_func3
# ifdef HAVE_FUNC_ATTRIBUTE3_FORMAT
#  define format_func3(x1,x2,x3) ATTRIBUTE(format(x1,x2,x3))
# else
#  define format_func3(x1,x2,x3)
# endif
#endif

#ifndef format_func3_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE3_FORMAT
#  define format_func3_ptr(x1,x2,x3) ATTRIBUTE(format(x1,x2,x3))
# else
#  define format_func3_ptr(x1,x2,x3)
# endif
#endif

#ifndef const_func
# ifdef HAVE_FUNC_ATTRIBUTE_CONST
#  define const_func ATTRIBUTE(const)
# else
#  define const_func
# endif
#endif

#ifndef const_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_CONST
#  define const_func_ptr ATTRIBUTE(const)
# else
#  define const_func_ptr
# endif
#endif

#ifndef pure_func
# ifdef HAVE_FUNC_ATTRIBUTE_PURE
#  define pure_func ATTRIBUTE(pure)
# else
#  define pure_func
# endif
#endif

#ifndef pure_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_PURE
#  define pure_func_ptr ATTRIBUTE(pure)
# else
#  define pure_func_ptr
# endif
#endif

#ifndef noreturn_func
# ifdef HAVE_FUNC_ATTRIBUTE_NORETURN
#  define noreturn_func ATTRIBUTE(noreturn)
# else
#  define noreturn_func
# endif
#endif

#ifndef unlikely_func
# ifdef HAVE_FUNC_ATTRIBUTE_COLD
#  define unlikely_func ATTRIBUTE(cold)
# else
#  define unlikely_func
# endif
#endif

#ifndef unlikely_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_COLD
#  define unlikely_func_ptr ATTRIBUTE(cold)
# else
#  define unlikely_func_ptr
# endif
#endif

#ifndef unused_func
# ifdef HAVE_FUNC_ATTRIBUTE_UNUSED
#  define unused_func ATTRIBUTE(unused)
# else
#  define unused_func
# endif
#endif

#ifndef unused_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_UNUSED
#  define unused_func_ptr ATTRIBUTE(unused)
# else
#  define unused_func_ptr
# endif
#endif

#ifndef noreturn_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_NORETURN
#  define noreturn_func_ptr ATTRIBUTE(noreturn)
# else
#  define noreturn_func_ptr
# endif
#endif

#ifndef never_null
# ifdef HAVE_FUNC_ATTRIBUTE_RETURNS_NONNULL
#  define never_null ATTRIBUTE(returns_nonnull)
# else
#  define never_null
# endif
#endif

#ifndef never_null_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_RETURNS_NONNULL
#  define never_null_ptr ATTRIBUTE(returns_nonnull)
# else
#  define never_null_ptr
# endif
#endif

#ifndef malloc_func
# ifdef HAVE_FUNC_ATTRIBUTE_MALLOC
#  define malloc_func ATTRIBUTE(malloc)
# else
#  define malloc_func
# endif
#endif

#ifndef malloc_func_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE_MALLOC
#  define malloc_func_ptr ATTRIBUTE(malloc)
# else
#  define malloc_func_ptr
# endif
#endif

#ifndef alloc_size_func1
# ifdef HAVE_FUNC_ATTRIBUTE1_ALLOC_SIZE
#  define alloc_size_func1(x1) ATTRIBUTE(alloc_size(x1))
# else
#  define alloc_size_func1(x1)
# endif
#endif

#ifndef alloc_size_func1_ptr
# ifdef HAVE_FUNC_PTR_ATTRIBUTE1_ALLOC_SIZE
#  define alloc_size_func1_ptr(x1) ATTRIBUTE(alloc_size(x1))
# else
#  define alloc_size_func1_ptr(x1)
# endif
#endif

#endif /* CONFIG_UNCONFIG_H */
