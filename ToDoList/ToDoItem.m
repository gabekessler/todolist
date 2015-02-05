//
//  ToDoItem.m
//  ToDoList
//
//  Created by Gabe Kessler on 2/5/15.
//  Copyright (c) 2015 Gabe Kessler. All rights reserved.
//

#import "ToDoItem.h"

@implementation ToDoItem

- (void)markAsCompleted:(BOOL)isComplete {
    self.completed = isComplete;
}


@end
