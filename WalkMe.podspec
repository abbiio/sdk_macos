Pod::Spec.new do |s|

  s.name         = "WalkMe"
  s.version      = "0.2.1"
  s.summary      = "WalkMe SDK for macOS"
  s.homepage     = "http://walkme.com"
  s.license      = "Commercial"
  s.author       = { "WalkMe Inc" => "http://walkme.com" }
  s.source       = { :git => "https://github.com/abbiio/walkme_sdk_macos.git", :tag => s.version }
  s.osx.deployment_target = '10.9'
  s.preserve_paths = "WalkMe.framework"
  s.frameworks = "Cocoa", "WebKit"
  s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "\"$(PODS_ROOT)/abbi\"", "OTHER_LDFLAGS" => "-lObjC" }
  s.vendored_frameworks = 'WalkMe.framework'

end
