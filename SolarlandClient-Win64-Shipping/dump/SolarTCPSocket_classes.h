// Class SolarTCPSocket.SolarTCPSocketClient
// Size: 0x2b8 (Inherited: 0x228)
struct ASolarTCPSocketClient : AActor {
	int32_t SendBufferSize; // 0x228(0x04)
	int32_t ReceiveBufferSize; // 0x22c(0x04)
	float TimeBetweenTicks; // 0x230(0x04)
	char pad_234[0x84]; // 0x234(0x84)

	bool SendData(int32_t ConnectionId, struct TArray<char> Data); // Function SolarTCPSocket.SolarTCPSocketClient.SendData // (Final|Native|Public|BlueprintCallable) // @ game+0x1c32fb0
	void Disconnect(int32_t ConnectionId); // Function SolarTCPSocket.SolarTCPSocketClient.Disconnect // (Final|Native|Public|BlueprintCallable) // @ game+0x1c32f20
	void Connect(struct FString IP, int32_t Port, struct FDelegate& OnConnected, struct FDelegate& OnDisconnected, struct FDelegate& OnMessageReceived, int32_t& ConnectionId); // Function SolarTCPSocket.SolarTCPSocketClient.Connect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1c32cb0
};

