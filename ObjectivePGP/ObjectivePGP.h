//
//  ObjectivePGP.h
//  ObjectivePGP
//
//  Created by Marcin Krzyzanowski on 03/05/14.
//  Copyright (c) 2014 Marcin Krzyżanowski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PGPTypes.h"

@interface ObjectivePGP : NSObject

- (BOOL) open:(NSString *)path;

@end