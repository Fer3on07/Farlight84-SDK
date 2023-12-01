#pragma once
#include <cstdint>

/*
 * ----------------------------------------------------------------------------
 * This file is part of unknowncheats.me free knowledge
 * ----------------------------------------------------------------------------
 *
 * Copyright (c) 2023 by Fer3on
 *
 * The offsets are based on or inspired by code from UnKnoWnCheaTs.me threads
 * (https://www.unknowncheats.me/) and Fer3on.
 *
 * ----------------------------------------------------------------------------
 */

namespace offsets {
    // STEAM
    extern const std::uint32_t GWorld;
    extern const std::uint32_t GNames;
    extern const std::uint32_t GOBJECT;

    // Launcher
    extern const std::uint32_t Launcher_GWorld;
    extern const std::uint32_t Launcher_GNames;
    extern const std::uint32_t Launcher_GOBJECT;

    // WORLD
    extern const std::uint32_t OwningGameInstance;
    extern const std::uint32_t PersistentLevel;
    extern const std::uint32_t OwningActor;
    extern const std::uint32_t MaxPacket;
    extern const std::uint32_t LocalPlayers;

    // PLAYER
    extern const std::uint32_t PlayerController;
    extern const std::uint32_t AcknowledgedPawn;
    extern const std::uint32_t PlayerState;
    extern const std::uint32_t RootComponent;
    extern const std::uint32_t PlayerCameraManager;
    extern const std::uint32_t CameraCachePrivate;
    extern const std::uint32_t RelativeLocation;
    extern const std::uint32_t RelativeRotation;
    extern const std::uint32_t ComponentVelocity;
    extern const std::uint32_t ActorID;
    extern const std::uint32_t BoneArray;
    extern const std::uint32_t ComponentToWorld;
    extern const std::uint32_t Mesh;
    extern const std::uint32_t StaticMesh;

    // ACTOR
    extern const std::uint32_t PlayerNamePrivate;
    extern const std::uint32_t NickName;
    extern const std::uint32_t SolarPlayerID;
    extern const std::uint32_t UserId;
    extern const std::uint32_t PlayerType;
    extern const std::uint32_t CurrentCharacterStateInGame;
    extern const std::uint32_t Team;
    extern const std::uint32_t TeamID;
    extern const std::uint32_t bIsSameTeamWithLocalPlayer;
    extern const std::uint32_t CurrentHealth;
    extern const std::uint32_t MaxHealth;
    extern const std::uint32_t CurrShieldValue;
    extern const std::uint32_t MaxShieldValue;
    extern const std::uint32_t CurrShieldLevel;
    extern const std::uint32_t bIsDeathVerge;
    extern const std::uint32_t bIsCrouched;
    extern const std::uint32_t Controller;
    extern const std::uint32_t AccountFlag;
    extern const std::uint32_t KillNum;
    extern const std::uint32_t OS;
    extern const std::uint32_t SpectatorNum;
    extern const std::uint32_t CharacterId;
    extern const std::uint32_t SkinId;

    // Weapon Config
    extern const std::uint32_t CachedCurrentWeapon;
    extern const std::uint32_t RecoilComponent;
    extern const std::uint32_t USingleWeaponConfig;
    extern const std::uint32_t UWeaponShootConfig;
    extern const std::uint32_t WeaponConfig;
    
    // Weapon Config Additional
    extern const std::uint32_t PrimaryAmmo;
    extern const std::uint32_t SecondaryAmmo;
    extern const std::uint32_t WeaponType;
    extern const std::uint32_t PrimaryAmmoCap;
    extern const std::uint32_t CurrentClipAmmo;
    extern const std::uint32_t InitSpeed;
    extern const std::uint32_t ProjectileMaxGravity;
    extern const std::uint32_t WeaponTextType;

    // Vehicle Config
    extern const std::uint32_t BestInteractingVehicle;
    extern const std::uint32_t SeatSlots;
    extern const std::uint32_t VehicleWeaponConfig;
    extern const std::uint32_t VehicleConfig;
    extern const std::uint32_t VehicleRecoilComponent;

    // ITEMS
    extern const std::uint32_t WeaponItemData;
    extern const std::uint32_t ItemData;
    extern const std::uint32_t itemID;
    extern const std::uint32_t itemName;
    extern const std::uint32_t ItemType;
    extern const std::uint32_t itemQuality;
}
