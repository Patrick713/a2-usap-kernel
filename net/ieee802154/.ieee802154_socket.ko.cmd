cmd_net/ieee802154/ieee802154_socket.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ieee802154/ieee802154_socket.ko net/ieee802154/ieee802154_socket.o net/ieee802154/ieee802154_socket.mod.o;  true
