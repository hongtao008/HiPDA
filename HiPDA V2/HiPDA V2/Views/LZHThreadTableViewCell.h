//
//  LZHThreadTableViewCell.h
//  HiPDA V2
//
//  Created by leizh007 on 15/4/26.
//  Copyright (c) 2015年 leizh007. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LZHThread;

@interface LZHThreadTableViewCell : UITableViewCell

-(id)configureThread:(LZHThread *)thread;

@end