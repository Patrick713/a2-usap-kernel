cmd_net/ipv6/netfilter/ip6table_mangle.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/netfilter/ip6table_mangle.ko net/ipv6/netfilter/ip6table_mangle.o net/ipv6/netfilter/ip6table_mangle.mod.o;  true