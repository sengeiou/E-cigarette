//
//  HomeViewModel.h
//  E-cigarette
//
//  Created by 有限公司 深圳市 on 2017/10/20.
//  Copyright © 2017年 SMA. All rights reserved.
//

#import "ECViewModel.h"

@interface HomeViewModel : ECViewModel
@property (nonatomic, strong, readonly) RACCommand *homeCommands;
@end
