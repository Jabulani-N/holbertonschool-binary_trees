# holbertonschool-binary_trees
The tallest tree catches the most wind


## [Example](https://github.com/hs-hq/0x1C.c/blob/main/README.md) of unsorted binary tree

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

This structure is in practice, a triply linked list.

* the one "previous" is called the `parent`

* the two "next" can be called `left` and `right`

# Task1:

## Potential  Pitfalls:

when inserting a node, be sure to **change the parent of the node** that got shoved down.

* `double free or corruption (out)` is a potential error you'll get when running if you don't.


