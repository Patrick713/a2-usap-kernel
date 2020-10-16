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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xab03ecd4, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x9829201d, "nf_ct_attach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xffc3b6c4, "__icmp_send" },
	{ 0xf3f4fee9, "nf_ip_checksum" },
	{ 0xdad75e3f, "ip_route_me_harder" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x9b73dda5, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0C89B77332ED5ED7B9F78F");
