# Collection_Views_Objective-C

Collection_Views_Objective-C

# Collection Views Versus Tables Views

- Unlike tables, collections introduce a Layout - a class that specifies how items are placed onscreens. 
- Layouts organize the location of each cell, so items appear exactly where needed.

# Implementation

``` objective-c
UICollectionView *collectionView = [[UICollectionView alloc] initWithCollectionViewLayout:layout]
```

**Passing nil produce an exception.**

# Scrool direction

- UICollectionViewScrollDirectionHorizontal
- UICollectionViewScrollDirectionVertical

# Header and Footer Sizing

# Insets

Describes how the outer edges of a section add padding, this padding affects how sections relate to their optional headers and footers and how sections move apart from each other in general.

# Recipe: Basic Collection View Flows





