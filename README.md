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

# Task1/2: Insert Left/Right

## Potential  Pitfalls:

when inserting a node, be sure to **change the parent of the node** that got shoved down.

* `double free or corruption (out)` is a potential error you'll get when running if you don't.

# Task 3: Delete Tree

This assignment assumes you'll be given the root. potentially, a `while (node->parent)` loop containing `node = node->parent` might be prudent, but that is not the focus.

we'll want to go as far down as possible.

```

while (node->left || node->right)


```
if the right has children, but left does not, we want to go ahead and slay left, but traverse into right

	therefore, it is ok to instantly delete childless nodes on encountering them

		therefore, it is ok to go really far down the left side first, as long as we force it to go down the right path route too

```

while (node->left || node->right)

	if (node->left)

		node = node->left;

	if (node->right)
		node= node->right;


```

the above code says "while I have any children, become one of them"

now I want "if I have no children, become my parent. delete only the side I came from"

I only need to track what my most recent move was


```

while (node->left || node->right)

        if (node->left)
	{
                node = node->left;
		lastMove = 'l';
	}

        if (node->right)
	{
                node = node->right;
		lastMove = 'r';
	}

```

with this, I know what I did last.

now just append a 

```
if (!(node->left) && !(node->right))
```
for "if I have no children"
protecting
```
node = node->parent;
switch lastMove
	case: 'l'
		free(node->left);
		break;
	case: 'r'
		free(node->right);
		break;
```
so it only deletes the node it just came from

if node had both sides, it'd do 

* enter node->left:lastmove=L
	* one loop on left child
	* left had no kids
* go back to left's parent: node
	*delete node's lastmove, which is node->left
* enter node->right: lastmove=R
	* one loop on right child
	* right child had both kids
		*  enter right->left:lastMove=L
			*right->left had no kids
		* go back to right via parent (no change to lastMove)
		* delete right's lastmove, which is Left
	* repeat on right's right, which happened to make lastMove right
pretending the order was different for worst case scenario
	* say we just deleted right's left, leaving lastMove=L
	* right has no kids
* go back to right's parent node: node
* delete node's lastMove, which is *left*. **lastmove cannot know which side it came from if it has depth greater than 2**

----

Instead, lets try directly checking for grandchildren.
```
if (!(node->left->left) && !(node->left->right)
	free(node->left)
if (!(node->right->left) && !(node->right->right)
        free(node->right)
```.

use the code that takes us to the deepest leaf wherever. when we find we have no kids, go to parent, adn then run this.

it'll enter left, find left has no kids, go to left's parent, delete any childless kids. THEN, it's allowed to loop agian to try

				
