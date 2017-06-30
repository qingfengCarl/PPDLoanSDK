

Pod::Spec.new do |s|


  s.name         = "PPDLoanSDK"
  s.version      = "1.1"
  s.summary      = "PPD_LoansSDK is a *****"

  s.description = "PPD_LoansSDK is a PPD_LoansSDKvvv PPD_LoansSDK PPD_LoansSDK PPD_LoansSDK****"


  s.homepage     = "https://github.com/qingfengCarl/PPDLoanSDK"
  s.source           = { :git => "https://github.com/qingfengCarl/PPDLoanSDK.git", :tag => s.version }


  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.requires_arc = true


  s.author           = { 'gongguangming' => 'gongguangming@ppdai.com' }
  
  s.ios.deployment_target = '7.0'



  s.source_files = 'Classes/*'
  s.ios.vendored_libraries   = 'Classes/libLoansSDK.a'
  s.resource_bundles = {
     'PPDLoanSDK' => ['Classes/*']
  }

   s.public_header_files = 'Classes/*.h'

   s.frameworks = 'UIKit', 'MapKit','AVFoundation','JavaScriptCore','ImageIO','StoreKit','AdSupport','AudioToolbox','CoreData','CFNetwork','AddressBookUI','CoreTelephony','CoreGraphics','MessageUI','Security','MobileCoreServices','SystemConfiguration','CoreLocation','Foundation','QuartzCore'




end
