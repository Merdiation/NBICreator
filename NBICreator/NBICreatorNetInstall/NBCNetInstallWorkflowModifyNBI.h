//
//  NBCWorkflowNetInstallModifyNBI.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-05-02.
//  Copyright (c) 2015 NBICreator. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NBCTargetController;
@class NBCWorkflowItem;
@class NBCTarget;

@protocol NBCNetInstallWorkflowModifyNBIDelegate
- (void)updateProgressStatus:(NSString *)statusMessage workflow:(id)workflow;
- (void)updateProgressBar:(double)value;
@end

@interface NBCNetInstallWorkflowModifyNBI : NSObject

@property (nonatomic, weak) id delegate;

// ------------------------------------------------------
//  Class Instance Properties
// ------------------------------------------------------
@property NBCTargetController *targetController;
@property NBCWorkflowItem *workflowItem;
@property NBCTarget *target;

// ------------------------------------------------------
//  Instance Methods
// ------------------------------------------------------
- (void)runWorkflow:(NBCWorkflowItem *)workflowItem;

@end
