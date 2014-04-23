//
//  ViewController.m
//  CanvasDemo
//
//  Created by apple on 14-4-23.
//  Copyright (c) 2014年 Taagoo. All rights reserved.
//

#import "ViewController.h"
#import <CSAnimation.h>
#import <CSAnimationView.h>
@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
}


- (IBAction)showAnimation:(id)sender {
    
    [self.view startCanvasAnimation];
    
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
