//
//  AppDelegate.h
//  Timey
//
//  Created by Jader Feijo on 18/11/2013.
//  Copyright (c) 2013 Jader Feijo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TasksManagerDelegate.h"

@class StatusItemView;
@class TasksManager;

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate, NSTableViewDataSource, NSTableViewDelegate, NSUserNotificationCenterDelegate, TasksManagerDelegate>

@property (assign) IBOutlet NSPopover *popover;
@property (assign) IBOutlet NSView *containerView;

@property (assign) IBOutlet NSView *tasksView;
@property (assign) IBOutlet NSTableView *tasksTableView;
@property (assign) IBOutlet NSMenu *settingsMenu;
@property (assign) IBOutlet NSMenuItem *startAtLoginMenuItem;

@property (assign) IBOutlet NSView *addTaskView;
@property (assign) IBOutlet NSTextField *taskNameTextField;
@property (assign) IBOutlet NSTextField *taskTimeTextField;

@property (readonly, strong, nonatomic) StatusItemView *statusItemView;
@property (readonly, strong, nonatomic) TasksManager *tasksManager;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)addTaskAction:(id)sender;
- (IBAction)removeTaskAction:(id)sender;
- (IBAction)resetTimerAction:(id)sender;
- (IBAction)resetAllTimersAction:(id)sender;
- (IBAction)settingsAction:(id)sender;
- (IBAction)toggleStartAtLogin:(id)sender;

- (IBAction)backToTasksAction:(id)sender;
- (IBAction)saveTaskAction:(id)sender;

@end
