cmd_drivers/net/wireless/rndis_wlan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/wireless/rndis_wlan.ko drivers/net/wireless/rndis_wlan.o drivers/net/wireless/rndis_wlan.mod.o;  true