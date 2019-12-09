//
//  TestBedViewControllerCollectionViewController.h
//  BasicCollectionViewControllerWithFL
//
//  Created by Carlos Santiago Cruz on 03/12/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestBedViewControllerCollectionViewController : UICollectionViewController
// layout and collection view configuration
@property (nonatomic, assign) BOOL useHeaders;
@property (nonatomic, assign) BOOL useFooters;
@property (nonatomic, assign) NSInteger numberOfSections;
@property (nonatomic, assign) NSInteger itemsInSection;
@end

NS_ASSUME_NONNULL_END
