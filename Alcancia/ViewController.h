#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)loadPhotoGallery:(id)sender;
- (IBAction)loadPhotoCamera:(id)sender;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *cameraButton;
@property (strong, nonatomic) IBOutlet UIImageView *imagePhoto;

////
- (IBAction)createCoin:(id)sender;
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *tapGesture;

@property (strong, nonatomic) IBOutlet UIPanGestureRecognizer *panGesture;
- (IBAction)moveCoin:(id)sender;


- (IBAction)rememberGame:(id)sender;


@end

