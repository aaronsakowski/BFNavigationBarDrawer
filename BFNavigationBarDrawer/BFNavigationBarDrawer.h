//
//  BFNavigationBarDrawer.h
//  BFNavigationBarDrawer
//
//  Created by Balázs Faludi on 04.03.14.
//  Copyright (c) 2014 Balazs Faludi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFNavigationBarDrawer : UIView

@property (nonatomic, readonly, getter=isVisible) BOOL visible;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, strong) UIToolbar *dropDownToolbar;
@property (nonatomic, strong) UIView *dropDownCustomView;

- (id)initWithCustomView:(UIView *)customView frame:(CGRect)frame;

- (void)showFromNavigationBar:(UINavigationBar *)bar animated:(BOOL)animated;
- (void)hideAnimated:(BOOL)animated;

@end
