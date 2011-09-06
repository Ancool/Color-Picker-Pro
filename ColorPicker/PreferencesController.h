//
//  PreferencesViewController.h
//  Color Picker
//
//  Created by Oscar Del Ben on 9/6/11.
//  Copyright 2011 DibiStore. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class RSLoginItems;
@class CustomStatusItem;

typedef enum {
    kOptionDefaultFormat,
    kOptionOpenAtLogin,
    kOptionShowColorPreview
} kOption;

@interface PreferencesController : NSWindowController


@property (strong) IBOutlet NSPopUpButton *defaultFormat;
@property (strong) IBOutlet NSButton *openAtLogin;
@property (strong) IBOutlet NSButton *showColorPreview;
@property (retain) RSLoginItems *loginItems;
@property (retain) CustomStatusItem *statusItemView;

- (IBAction)controllerChanged:(id)sender;
@end
