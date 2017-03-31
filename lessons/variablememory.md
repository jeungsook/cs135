---
layout: pages
title:  "Variables in Memory"
permalink: /lessons/variablememory/
---

## How Computers Allocate Memory and Store Values for your Variables

Remember that variable names are only nice, readable names of certain memory locations. (Which are actually referenced by the computer 
using hex values). When you declare a variable, the computer goes and finds a free memory block of the size that you need and allocates 
it to your program so that you can reference it using whatever name you chose. 

Think of it like this: you're asking a warehouse worker to store an item for you in a warehouse. All of the items in the warehouse are 
stored in boxes of varying sizes. He finds an empty box that's big enough to fit you item and puts your item in that box. However, 
the warehouse needs a way to be able to find your item again if you need it. The warehouse already has it's own naming system that is 
very efficient. The box the worker put your item in is already named 0x31AD and the warehouse can find that easily. But, you have tons 
of items you want to store and you don't like the names the warehouse provides. Also, there's no guarantee that the warehouse will store 
the same item in that same box everytime you take everything out and want to put them back in (exiting and re-running your program).

So, instead you give the warehouse names that you came up with for each item. If you want to store a vase, you name it "bluevase". If 
you want to store another vase, you name it "purplevase". The warehouse stores those names in their system, along with the names 
of the boxes that they put them in. All you have to do on your end is give them an item and the name. Then tell them that name when you 
need the item. They will deal with finding a location, storing it, and searching for it when you need it.

In computers, this name is actually called a **pointer** that "points" to a certain location in memory. In our warehouse example, 
this name will "point" the warehouse worker to the correct box where your item is stored. You can create your own pointers 
which come in handy very often in Computer Science. You will cover pointers in more detail in CS202.

However, understanding the basic idea of pointers will help you wrap your head around the difference between pass-by-value and 
pass-by-reference.
