//
//  AddressListCell.h
//  ETShop-for-iOS
//
//  Created by EleTeam(Tony Wong) on 15/10/23.
//  Copyright © 2015年 EleTeam. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>
#import "AddressEntity.h"

@protocol AddressListCellDelegate <NSObject>

- (void)doSelectAddress:(AddressEntity *)address;

@end

@interface AddressListCell : UITableViewCell

@property (nonatomic, weak) id<AddressListCellDelegate> delegate;

+ (CGFloat)height;

- (void)fillContentWithAddress:(AddressEntity *)address;

@end
