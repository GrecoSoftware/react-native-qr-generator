
# react-native-qr-generator

## Getting started

`$ npm install react-native-qr-generator --save`

### Mostly automatic installation

`$ react-native link react-native-qr-generator`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-qr-generator` and add `RNReactNativeQrcodeNative.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNReactNativeQrcodeNative.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNReactNativeQrcodeNativePackage;` to the imports at the top of the file
  - Add `new RNReactNativeQrcodeNativePackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-qr-generator'
  	project(':react-native-qr-generator').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-qr-generator/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-qr-generator')
  	```

## Usage
```javascript
import QRCode from 'react-native-qr-generator';

return <QRCode size={200} value="https://www.zapper.com" />
```
