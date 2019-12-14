# Collection_Views_Objective-C

Collection_Views_Objective-C

![Screen Shot 2019-12-03 at 18 08 28](https://user-images.githubusercontent.com/24994818/70100642-f0d7c780-15f7-11ea-9721-9a74876f4edd.png)

# Collection Views Versus Tables Views

- Unlike tables, collections introduce a Layout - a class that specifies how items are placed onscreens. 
- Layouts organize the location of each cell, so items appear exactly where needed.

# Implementation

``` objective-c
UICollectionViewFlowLayout *collectionViewFlowLayout = [[UICollectionViewFlowLayout alloc] init];
collectionViewFlowLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;

UICollectionView *collectionView = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:collectionViewFlowLayout];
collectionView.delegate = self;
collectionView.dataSource = self;
```

**Passing nil produce an exception.**

# Scroll direction

- UICollectionViewScrollDirectionHorizontal
- UICollectionViewScrollDirectionVertical

# Header and Footer Sizing

- headerReferenceSize
- footerReferenceSize

conform to: UICollectionViewDelegateFlowLayout

``` objective-c
- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout referenceSizeForHeaderInSection:(NSInteger)section
{
  return CGSizeMake(60.0f, 30.0f);
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section
{
 return CGSizeMake(60.0f, 30.0f); 
}
```


# Insets

Describes how the outer edges of a section add padding, this padding affects how sections relate to their optional headers and footers and how sections move apart from each other in general.

# Recipe: Basic Collection View Flows

- optional headers
- optional footers

# Collection Views

- A collection of views
- Collection views are created the same way as tables.

# Collection View Cell

- They are empty cells that we have to customize as we did before for custom table view cells.
- UICollectionViewCell class creates the cell, and contain three empty views to manage their content:
- a view for the content
- a view for the background
- second background view that is shown when the cell is selected.

### contentView
### backgroundView
### selectedbackgroundView

# Collection View Flow Layout

- The big difference between TableViews and Collection Views is that the position of the cells in a Collection View are not determinated by the view, they are set by a **layout object** that works along with the Collection View to present the cells on the screen. This object is created from a subclass of the **UICollectionViewLayout** class. 

- Collection Views include by default a subclass called **UICollectionViewFlowLayout** that provides a very customizable **grid-like** layout that is usually more than enough for our projects. The layout is called Flow

- scrollDirection
- minimumInteritemSpacing
- minimumLineSpacing
- sectionInset
- itemSize
- estimatedItemSize

# Collection View Protocols

- UICollectionViewDelegate
- UICollectionViewDataSource

# Layout Protocol

- The Flow layout can also designate a delegate to get specific values for individual cells.
- The methods are defined in the UICollectionViewDelegate-FlowLayout protocol.

# Implementing Collection Views (process to configure)

- Implement delegate methods to report the number of cells in the section (only one by default), and provide the cells.
- Get the prototype cell calling the dequeueReusableCell() method with the identifier assigned to the cell from the Attributes Inspector panel ("myCell" in this example), cast it as our subclass, and then configure the elements in the cell.

# ¿what is the difference from tableViews ?

- The indexPath structure includes three properties: section, row, and item.
- The section and row properties are used to identify the sections and each cell on a Table View, but Collection views considere a cell to be an item, not an entire row, and therefore they use the section and item properties instead.

# What happened when we add a Collection View (drag and drop) to the storyboard ?

- The system creates an UICollectionViewFlowLayout object and assigns it to the collectionView-Layout property of the collection view's object.
- This layout object is configured by default to position the cells in a grid. The result is shown in the following figure:

# Header and Footer Sizing




