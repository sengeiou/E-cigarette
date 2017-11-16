//
//  ResetViewModel.h
//  E-cigarette
//
//  Created by 有限公司 深圳市 on 2017/10/20.
//  Copyright © 2017年 SMA. All rights reserved.
//

#import "ECViewModel.h"

@interface ResetViewModel : ECViewModel
@property (nonatomic, strong) NSString *account;
@property (nonatomic, strong, readonly) RACSignal *accountSignal;
@property (nonatomic, strong, readonly) RACCommand *resetCommand;
@end
