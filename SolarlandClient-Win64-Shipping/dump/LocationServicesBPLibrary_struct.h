// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8 {
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6
};

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// Size: 0x18 (Inherited: 0x00)
struct FLocationServicesData {
	float Timestamp; // 0x00(0x04)
	float Longitude; // 0x04(0x04)
	float Latitude; // 0x08(0x04)
	float HorizontalAccuracy; // 0x0c(0x04)
	float VerticalAccuracy; // 0x10(0x04)
	float Altitude; // 0x14(0x04)
};

