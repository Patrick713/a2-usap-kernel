cmd_net/bridge/netfilter/ebtable_broute.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/bridge/netfilter/ebtable_broute.ko net/bridge/netfilter/ebtable_broute.o net/bridge/netfilter/ebtable_broute.mod.o;  true
