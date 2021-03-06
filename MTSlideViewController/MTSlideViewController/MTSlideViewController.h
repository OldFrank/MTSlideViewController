//
//  MTSlideViewController.h
//  MTSlideViewController
//
//  Created by Matthias Tretter on 21.01.11.
//  Copyright (c) 2009-2012  Matthias Tretter, @myell0w. All rights reserved.
//  Based on the original work of Andrew Carter: (c) 2001 Andrew Carter
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "MTSlideViewControllerDefines.h"

@interface MTSlideViewController : UIViewController

@property (nonatomic, strong, readonly) UINavigationController *slideNavigationController;
@property (nonatomic, assign) MTSlideViewControllerState slideState;
@property (nonatomic, assign) MTSlideViewControllerMode slideMode;

@property (nonatomic, weak) id <MTSlideViewControllerDelegate> delegate;
@property (nonatomic, weak) id <MTSlideViewControllerDataSource> dataSource;

@property (nonatomic, strong, readonly) UITableView *tableView;

+ (MTSlideViewController *)slideViewController;

- (void)slideOutSlideNavigationControllerView;
- (void)slideInSlideNavigationControllerView;
- (void)slideSlideNavigationControllerViewOffScreen;

- (void)cancelSearching;

- (void)showViewController:(UIViewController *)viewController;

@end
