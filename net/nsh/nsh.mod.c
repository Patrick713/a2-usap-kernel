#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x336eeff9, "dev_add_offload" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xb98debda, "dev_remove_offload" },
	{ 0xf68b0045, "skb_push" },
	{ 0x6e73c0b7, "skb_mac_gso_segment" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0x9d669763, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4F6C8CC2CE322FCF066423");
