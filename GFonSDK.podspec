Pod::Spec.new do |s|

s.name         = "GFonSDK"
s.version = "1.0.1"
s.summary      = "This is the Fon SDK for iOS devices."
s.homepage     = "https://github.com/YinJone/WPASDK_gotell"
s.license      = "MIT"
s.author       = { "Jone.yin" => "yin_jone@163.com" }
s.ios.deployment_target = '9.0'
s.vendored_framework = 'FonSDK.framework'
s.frameworks = "Foundation"
s.requires_arc = true
s.source = { git: 'https://github.com/YinJone/FonSDK_gotell.git', :tag => s.version}

s.dependency 'GWisprSDK', '1.0.1'
s.dependency 'GProvisioningSDK', '1.0.2'
s.dependency 'GWPASDK', '1.0.1'
s.dependency 'AWSKinesis', '2.6.5'

s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
end