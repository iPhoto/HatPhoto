//
//  Hat.h
//  HatPhoto
//
//  Created by AppDevelopper on 14.01.13.
//
//

#import <Foundation/Foundation.h>
#import "HatCategory.h"
//typedef enum {
//	HatCategoryOthers
//}HatCategory;

@interface Hat : NSObject

@property (nonatomic, strong) NSString *imgName;
@property (nonatomic, strong) HatCategory *category;

@end
